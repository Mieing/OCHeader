@class NSString, NSURL;

@interface IESIMEmoticonInfoModel : NSObject <IESIMEmoticonInfoModelProtocol>

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *displayIconURL;
@property (copy, nonatomic) NSString *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToAWEEmoticonInfoModel;
- (void).cxx_destruct;

@end
