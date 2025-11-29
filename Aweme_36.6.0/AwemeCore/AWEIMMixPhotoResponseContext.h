@class NSString, NSError, AWEIMMixPhotoResponseModel;

@interface AWEIMMixPhotoResponseContext : NSObject

@property (nonatomic) long long reqActionType;
@property (nonatomic) double requestTime;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) BOOL shouldDismissShootPage;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) AWEIMMixPhotoResponseModel *response;

- (void).cxx_destruct;

@end
