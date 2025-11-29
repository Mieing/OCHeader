@class NSString, NSDictionary;

@interface AWEVoipFinishForwardModel : NSObject

@property (readonly, nonatomic) long long forwardType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSDictionary *customInfo;

- (id)initWithforwardType:(long long)a0 title:(id)a1 scheme:(id)a2;
- (void).cxx_destruct;

@end
