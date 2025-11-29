@class NSString, NSNumber;

@interface AWEAdConvertPopupInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *pictureUrl;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *cancelToast;
@property (copy, nonatomic) NSString *confirmToast;
@property (copy, nonatomic) NSString *shortContent;
@property (nonatomic) unsigned long long convertType;
@property (copy, nonatomic) NSNumber *cardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
