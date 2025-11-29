@class NSDictionary, NSString;

@interface AWESearchJumpManager : NSObject <AWESearchTagViewJumpProtocol>

@property (copy, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) NSString *searchKeyword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
