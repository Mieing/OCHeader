@class NSString, NSUUID, INIntent;

@interface AWESiriShowCutModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isAddInSiri;
@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *accessibilityText;
@property (copy, nonatomic) NSString *shortcutType;
@property (nonatomic) BOOL hasShow;

- (void).cxx_destruct;

@end
