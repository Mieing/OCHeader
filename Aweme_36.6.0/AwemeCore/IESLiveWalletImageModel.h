@class NSArray, NSString, NSNumber;

@interface IESLiveWalletImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
