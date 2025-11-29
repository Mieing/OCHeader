@class NSURL, NSString, NSNumber;

@interface ACCAESoundFXResourceModel : NSObject

@property (retain, nonatomic) NSURL *audioURL;
@property (retain, nonatomic) NSString *audioName;
@property (retain, nonatomic) NSString *audioID;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *soundFXModelJSONString;
@property (retain, nonatomic) NSNumber *volume;

- (void).cxx_destruct;

@end
