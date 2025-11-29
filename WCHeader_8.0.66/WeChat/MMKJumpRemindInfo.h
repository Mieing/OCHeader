@class NSString, MMKRedirectUrl;

@interface MMKJumpRemindInfo : NSObject

@property (readonly, nonatomic) int jumpType;
@property (readonly, nonatomic) BOOL isPopUpWindows;
@property (readonly, nonatomic) NSString *wording;
@property (readonly, nonatomic) NSString *leftButtonWording;
@property (readonly, nonatomic) NSString *rightButtonWording;
@property (readonly, nonatomic) MMKRedirectUrl *url;
@property (readonly, nonatomic) NSString *title;

+ (id)KJumpRemindInfoWithJumpType:(int)a0 isPopUpWindows:(BOOL)a1 wording:(id)a2 leftButtonWording:(id)a3 rightButtonWording:(id)a4 url:(id)a5 title:(id)a6;

- (id)initWithJumpType:(int)a0 isPopUpWindows:(BOOL)a1 wording:(id)a2 leftButtonWording:(id)a3 rightButtonWording:(id)a4 url:(id)a5 title:(id)a6;
- (id)description;
- (void).cxx_destruct;

@end
