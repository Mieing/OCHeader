@class NSDictionary;

@interface IESLiveClientDiagnoseResult : NSObject

@property (nonatomic) BOOL hasException;
@property (copy, nonatomic) NSDictionary *infoDict;
@property (copy, nonatomic) NSDictionary *overInfo;

- (void).cxx_destruct;

@end
