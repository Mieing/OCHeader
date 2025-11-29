@class NSString, NSAttributedString;

@interface IESLiveAnchorCloseInfo : NSObject

@property (retain, nonatomic) NSString *forbiddenURL;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *violationReason;
@property (retain, nonatomic) NSAttributedString *displayText;
@property (nonatomic) BOOL closeRoomByAccountExited;

- (void).cxx_destruct;

@end
