@class NSString, NSDictionary, AWEUserRelationContext;

@interface AWEProfileMateButtonContext : NSObject

@property (retain, nonatomic) AWEUserRelationContext *relationContext;
@property (copy, nonatomic) id /* block */ showMenuBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *trackerParamDict;

- (void).cxx_destruct;

@end
