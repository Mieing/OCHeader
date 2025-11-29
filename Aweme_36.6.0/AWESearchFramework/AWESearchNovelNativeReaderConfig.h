@class NSDictionary, NSString, NSObject;

@interface AWESearchNovelNativeReaderConfig : NSObject

@property (retain, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) id /* block */ didRecieveTranscodeBlock;
@property (copy, nonatomic) id /* block */ didLoadTranscodeScriptBlock;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSObject *monitorContext;
@property (copy, nonatomic) NSDictionary *result;
@property (copy, nonatomic) NSString *transcodingExtra;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSDictionary *webSchemeParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double onTranscodeBeginTime;
@property (nonatomic) BOOL shouldShowSuccessBottomNotification;
@property (copy, nonatomic) NSString *transcodeUrl;

- (void).cxx_destruct;

@end
