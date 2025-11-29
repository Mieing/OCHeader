@class NSString, NSMutableSet;

@interface IESECMallPreDecodeItem : NSObject

@property (nonatomic) BOOL isCard;
@property (nonatomic) BOOL isCommonComponent;
@property (retain, nonatomic) NSMutableSet *cardUrls;
@property (nonatomic) long long vmCount;
@property (copy, nonatomic) NSString *templateUrl;
@property (retain, nonatomic) id templateBundle;

- (void).cxx_destruct;
- (id)init;

@end
