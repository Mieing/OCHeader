@class NSMutableDictionary;

@interface TIMXPBNCheckTokenResponseBody : GPBMessage

@property (nonatomic) BOOL isMatched;
@property (nonatomic) BOOL hasIsMatched;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
