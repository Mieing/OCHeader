@class MMConfSDKMember;

@interface MMConfSDKTalkingInfo : NSObject

@property (retain, nonatomic) MMConfSDKMember *member;
@property (nonatomic) int voiceActivity;

- (id)initWithMember:(id)a0 voiceActivity:(int)a1;
- (id)contact;
- (id)description;
- (void).cxx_destruct;

@end
