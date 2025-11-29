@class NSDictionary, NSString;

@interface BDPHostChatGroupPluginModel : BDPBasePluginModel

@property (copy, nonatomic) NSDictionary *bizExt;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *trackDictionary;

- (void).cxx_destruct;

@end
