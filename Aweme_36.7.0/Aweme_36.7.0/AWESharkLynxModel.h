@class NSString;

@interface AWESharkLynxModel : NSObject <AWESharkLynxModelProtocol>

@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *rawData;
@property (nonatomic) long long cardType;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
