@class BDPSettingsParams, NSString, NSDictionary;

@interface BDPSettingsRequestInfo : NSObject

@property (retain, nonatomic) BDPSettingsParams *customParams;
@property (copy, nonatomic) id /* block */ requestCompletion;
@property (copy, nonatomic) NSString *customURLString;
@property (copy, nonatomic) NSDictionary *trackInfo;

- (void).cxx_destruct;

@end
