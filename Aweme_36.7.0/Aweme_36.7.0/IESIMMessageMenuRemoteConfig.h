@class NSString;

@interface IESIMMessageMenuRemoteConfig : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *lightIconUrl;
@property (readonly, copy, nonatomic) NSString *darkIconUrl;
@property (readonly, nonatomic) BOOL preFetched;

- (id)initWithKey:(id)a0 config:(id)a1;
- (void)updatePreFetched:(BOOL)a0;
- (void).cxx_destruct;

@end
