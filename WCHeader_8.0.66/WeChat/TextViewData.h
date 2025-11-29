@class NSString, NSMutableArray;

@interface TextViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *text;
@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) int textAlign;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (void)initialize;

@end
