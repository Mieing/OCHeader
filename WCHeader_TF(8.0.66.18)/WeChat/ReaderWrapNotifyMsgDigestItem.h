@class NSString, NSArray;

@interface ReaderWrapNotifyMsgDigestItem : NSObject <NSCopying>

@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL fontBold;
@property (retain, nonatomic) NSArray *contentList;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)genContent;
- (id)genMergeContent:(long long)a0;
- (void).cxx_destruct;

@end
