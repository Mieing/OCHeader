@class NSString, NSArray;

@interface WCAdPickerDataInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int deep;
@property (retain, nonatomic) NSArray *defaultData;
@property (retain, nonatomic) NSArray *transferTable;
@property (retain, nonatomic) NSArray *dataList;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
