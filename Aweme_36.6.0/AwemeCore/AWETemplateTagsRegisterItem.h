@class NSString, NSArray;

@interface AWETemplateTagsRegisterItem : NSObject <AWETemplateTagsRegisterItemProtocol>

@property (retain, nonatomic) Class strategyClass;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *labelGroup;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *lineOfBusiness;
@property (copy, nonatomic) NSArray *owners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
