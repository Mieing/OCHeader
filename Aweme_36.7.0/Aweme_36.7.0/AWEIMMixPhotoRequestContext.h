@class NSString, AWEIMMixPhotoInfo, NSDictionary;

@interface AWEIMMixPhotoRequestContext : NSObject

@property (nonatomic) unsigned long long convType;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) long long convShortId;
@property (nonatomic) long long playID;
@property (retain, nonatomic) AWEIMMixPhotoInfo *photoInfo;
@property (copy, nonatomic) NSString *mixStyle;
@property (nonatomic) long long mixNumUpperLimit;
@property (copy, nonatomic) NSDictionary *trackExt;
@property (copy, nonatomic) NSString *loraTaskId;
@property (copy, nonatomic) NSString *styleUrl;
@property (copy, nonatomic) NSString *templateType;
@property (nonatomic) long long shareTaskID;
@property (nonatomic) long long reqActionType;

- (void).cxx_destruct;

@end
