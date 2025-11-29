@class NSString, NSDictionary;

@interface AWEPrivacyThreadInfoList : NSObject

@property (copy, nonatomic) NSString *bpeaCertInfo;
@property (retain, nonatomic) NSDictionary *jsbInfo;
@property (retain, nonatomic) NSDictionary *uiActionInfo;

- (void).cxx_destruct;
- (id)init;

@end
