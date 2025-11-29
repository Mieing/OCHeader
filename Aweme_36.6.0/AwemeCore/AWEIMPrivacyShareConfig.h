@class NSString;

@interface AWEIMPrivacyShareConfig : NSObject <AWEIMPrivacyShareConfigProtocol>

@property (copy, nonatomic) NSString *tip;
@property (nonatomic) BOOL showInnerShare;
@property (nonatomic) BOOL showOuterShare;
@property (nonatomic) BOOL disableRepost;
@property (nonatomic) BOOL disablePrivateMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
