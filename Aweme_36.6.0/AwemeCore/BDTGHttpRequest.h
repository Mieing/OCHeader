@class NSMutableDictionary, NSDictionary, NSURL, NSString;

@interface BDTGHttpRequest : NSObject <BDTGHttpRequest>

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSMutableDictionary *mutableHTTPHeaderFields;
@property (readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)init;

@end
