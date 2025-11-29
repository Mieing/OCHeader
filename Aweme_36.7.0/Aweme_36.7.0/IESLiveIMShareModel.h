@class NSString, NSURL, UIImage;

@interface IESLiveIMShareModel : NSObject

@property (nonatomic) BOOL isCertified;
@property (nonatomic) BOOL stickOnTop;
@property (nonatomic) BOOL isBannedGroup;
@property (nonatomic) BOOL online;
@property (nonatomic) unsigned long long hashFlag;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *sigLabel;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *avatarURL;
@property (retain, nonatomic) NSString *toSessionID;
@property (retain, nonatomic) NSString *toUserID;
@property (retain, nonatomic) UIImage *certifiedImage;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) id shareModel;
@property (retain, nonatomic) id userModel;
@property (nonatomic) BOOL isChatChannelGroup;

- (void).cxx_destruct;

@end
