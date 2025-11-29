@class NSString;

@interface AWEFeedSubtitleLanguageModel : NSObject <AWEFeedSubtitleLanguageModelProtocol>

@property (copy, nonatomic) NSString *descWithLocalLanguage;
@property (copy, nonatomic) NSString *descWithTargetLanguage;
@property (nonatomic) long long languageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
