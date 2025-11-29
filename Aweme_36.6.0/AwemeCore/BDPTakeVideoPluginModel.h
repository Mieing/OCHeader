@class NSString;

@interface BDPTakeVideoPluginModel : BDPBasePluginModel

@property (nonatomic) BOOL isHashtag;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long indexToBodyEnd;
@property (copy, nonatomic) NSString *textTitle;
@property (copy, nonatomic) NSString *userIDForModel;

- (void).cxx_destruct;

@end
