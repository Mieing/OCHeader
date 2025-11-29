@class NSString;

@interface TTVideoEngineSubModel : NSObject <TTVideoEngineSubProtocol>

@property (nonatomic) long long languageId;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *format;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long subtitleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
