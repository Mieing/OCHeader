@class NSArray, NSString;

@interface AFDMentionSugSearchContext : NSObject <AFDMentionSugContextProtocol>

@property (copy, nonatomic) NSArray *presentedUserArray;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQuery:(id)a0 scene:(long long)a1 userArray:(id)a2;
- (void).cxx_destruct;

@end
