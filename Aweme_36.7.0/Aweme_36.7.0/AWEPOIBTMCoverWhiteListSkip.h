@class NSArray, NSString;

@interface AWEPOIBTMCoverWhiteListSkip : NSObject <AWEPOISkipCheckProtocol>

@property (copy, nonatomic) NSArray *whiteList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)judgeIsSkipCheckWithEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
