@class NSString;

@interface AWEAdCommentEggManager : NSObject <AWEAdCommentEggManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateRandomHint:(id)a0;
+ (id)adCommentEggPlaceholder:(id)a0;
+ (long long)isRegexMatched:(id)a0 commentStr:(id)a1;


@end
