@class NSString, NSDictionary;

@interface XPlayBusinessHighlight : NSObject <XPlayHighlightProtocol>

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *videoId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightWithInst:(id)a0;

- (void).cxx_destruct;

@end
