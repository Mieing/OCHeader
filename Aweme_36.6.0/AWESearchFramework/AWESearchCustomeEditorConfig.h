@class NSString, NSNumber, NSDictionary;

@interface AWESearchCustomeEditorConfig : NSObject

@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *markDownInfo;
@property (copy, nonatomic) NSString *videoEffectID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *anchorInfo;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) NSString *aigcMarkDataString;

- (void).cxx_destruct;

@end
