@class NSArray, NSString, NSDictionary, NSNumber;

@interface AWEOpenShareAlbumVideoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long videoHeight;
@property (nonatomic) long long videoWidth;
@property (retain, nonatomic) NSNumber *selectedNum;
@property (copy, nonatomic) NSArray *videoURLs;
@property (copy, nonatomic) NSArray *coverURLs;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isTop;
@property (nonatomic) long long diggCount;
@property (nonatomic) BOOL isLastSelected;
@property (nonatomic) long long playCount;
@property (copy, nonatomic) NSDictionary *cooperationInfo;
@property (nonatomic) BOOL isNonSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
