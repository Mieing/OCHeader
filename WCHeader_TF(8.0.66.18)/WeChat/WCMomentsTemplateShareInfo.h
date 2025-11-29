@class NSString, WCMomentsTemplateInfo;

@interface WCMomentsTemplateShareInfo : NSObject

@property (nonatomic) long long shareSource;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) WCMomentsTemplateInfo *templateInfo;
@property (copy, nonatomic) NSString *extInfo;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
