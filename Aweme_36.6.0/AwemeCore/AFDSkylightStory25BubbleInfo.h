@class NSString, AFDSkylightStory25BubbleInfoDTO;

@interface AFDSkylightStory25BubbleInfo : NSObject <AFDSkylightStory25BubbleInfoProtocol>

@property (retain, nonatomic) AFDSkylightStory25BubbleInfoDTO *bubbleDTO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bubbleInfoWithDict:(id)a0;

- (void).cxx_destruct;
- (id)itemID;
- (id)bubbleText;

@end
