@class NSString, NSArray;

@interface ReaderWrapNotifyMsgMergeItem : NSObject <NSCopying>

@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL fontBold;
@property (retain, nonatomic) NSArray *contentList;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)genMergeCount;
- (void).cxx_destruct;

@end
