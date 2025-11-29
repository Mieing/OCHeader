@class NSString;

@interface AWEIMElfBotMemoryBaseBrief : NSObject <AWEIMElfBotModelComparatorVersionProtocol>

@property (nonatomic) long long algorithmVersion;
@property (nonatomic) long long majorVersion;
@property (nonatomic) long long minorVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
