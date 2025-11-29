@class NSString, HTSLiveImage, NSDictionary;

@interface HTSLiveToolbarItemExtra : NSObject

@property (copy, nonatomic) NSString *jsonStr;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
