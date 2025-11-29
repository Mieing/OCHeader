@class NSString, NSDictionary, NSArray;

@interface APCDTOMode : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *currentMode;
@property (copy, nonatomic) NSDictionary *modeName;
@property (nonatomic) BOOL subModeUiVisible;
@property (copy, nonatomic) NSDictionary *subModeIndicator;
@property (copy, nonatomic) NSArray *allowMode;
@property (copy, nonatomic) NSArray *blockMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
