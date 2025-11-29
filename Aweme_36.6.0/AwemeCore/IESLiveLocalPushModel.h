@class HTSLiveUser, NSString, NSArray, UIImage, HTSEventContext, NSAttributedString, NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveLocalPushModel : NSObject

@property (retain, nonatomic) NSString *msgSchema;
@property (nonatomic) BOOL disableIcon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSArray *iconURLList;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *titleAttributedString;
@property (retain, nonatomic) NSString *detail;
@property (copy, nonatomic) NSAttributedString *detailAttributedString;
@property (retain, nonatomic) NSString *actionTitle;
@property (nonatomic) BOOL showCountDown;
@property (nonatomic) double duration;
@property (nonatomic) BOOL showArrow;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ appearAction;
@property (copy, nonatomic) id /* block */ disappearAction;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (copy, nonatomic) NSString *pushScene;
@property (copy, nonatomic) NSString *pushReason;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)modelFromMessage:(id)a0;

- (void)defaultClickAction;
- (void).cxx_destruct;

@end
