@class AWEIMMessage, NSString, AWEIMMessageComponentContext;

@interface AWEIMDynamicMessageTrackModel : NSObject

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMMessageComponentContext *context;
@property (nonatomic) long long trackAction;
@property (copy, nonatomic) NSString *serverParamsKey;

- (id)initWithMessage:(id)a0 context:(id)a1 trackAction:(long long)a2;
- (void).cxx_destruct;

@end
