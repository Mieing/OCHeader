@interface PBCoderPropertyType : NSObject

@property (nonatomic) unsigned int m_index;
@property (readonly, nonatomic) int m_cType;
@property (readonly, nonatomic) Class m_cls;
@property (readonly, nonatomic) Class m_subCls;
@property (readonly, nonatomic) int m_subCType;
@property (retain, nonatomic) id m_blockGet;
@property (retain, nonatomic) id m_blockSet;
@property (nonatomic) BOOL m_isSuperPlaceHolder;
@property (nonatomic) BOOL m_isContainerUnpacked;

- (id)initWithClass:(Class)a0 subClass:(Class)a1 unpacked:(BOOL)a2 index:(unsigned int)a3 blockGet:(id)a4 blockSet:(id)a5;
- (id)initWithClass:(Class)a0 subCType:(int)a1 unpacked:(BOOL)a2 index:(unsigned int)a3 blockGet:(id)a4 blockSet:(id)a5;
- (id)initWithCType:(int)a0 index:(unsigned int)a1 blockGet:(id)a2 blockSet:(id)a3;
- (void).cxx_destruct;

@end
