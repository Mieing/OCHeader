@class NSMutableArray, NSMutableDictionary;

@interface RightTopMenuData : MMObject <NSCoding>

@property (nonatomic) BOOL m_bShowNew;
@property (retain, nonatomic) NSMutableArray *m_arrShowIDs;
@property (retain, nonatomic) NSMutableDictionary *m_dicItemArchives;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)updateFromOld;
- (BOOL)updateConfig:(id)a0;
- (BOOL)clickMenu:(id)a0;
- (void).cxx_destruct;

@end
