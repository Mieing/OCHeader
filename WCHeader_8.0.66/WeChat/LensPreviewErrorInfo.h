@class NSString;

@interface LensPreviewErrorInfo : MMObject <YYModel>

@property (nonatomic) long long errCode;
@property (retain, nonatomic) NSString *errMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)getErrorMessageForDisplay;
- (void).cxx_destruct;

@end
