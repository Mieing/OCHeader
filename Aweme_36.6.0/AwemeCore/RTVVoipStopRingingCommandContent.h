@class NSString, RTVVoipStopRingingBody;
@protocol Optional;

@interface RTVVoipStopRingingCommandContent : JSONModel

@property (copy, nonatomic) NSString *callID;
@property (retain, nonatomic) RTVVoipStopRingingBody<Optional> *stopRingingBody;

+ (id)keyMapper;
+ (id)contentWithCallID:(id)a0 stopRingingBody:(id)a1;

- (void).cxx_destruct;

@end
