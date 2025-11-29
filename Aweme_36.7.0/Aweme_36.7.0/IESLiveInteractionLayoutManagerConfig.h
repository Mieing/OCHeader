@class NSString, HTSEventContext;

@interface IESLiveInteractionLayoutManagerConfig : NSObject

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL layoutConfigFetchEnabled;
@property (retain, nonatomic) HTSEventContext *eventContext;

- (void).cxx_destruct;

@end
