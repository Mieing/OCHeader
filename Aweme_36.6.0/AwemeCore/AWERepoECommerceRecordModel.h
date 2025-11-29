@class NSString, NSDictionary, NSArray, NSMutableArray;

@interface AWERepoECommerceRecordModel : NSObject <ACCRepositoryClipContextProtocol, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *imageArray;
@property (retain, nonatomic) NSMutableArray *coverImageArray;
@property (retain, nonatomic) NSMutableArray *videoPathArray;
@property (retain, nonatomic) NSMutableArray *videoInfoArray;
@property (nonatomic) BOOL multiSelect;
@property (nonatomic) BOOL supportVideo;
@property (nonatomic) unsigned long long maxSelectCount;
@property (nonatomic) unsigned long long maxUploadImageCount;
@property (nonatomic) unsigned long long maxUploadVideoCount;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL preferCamera;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) id /* block */ uploadCompletionBlock;
@property (retain, nonatomic) NSDictionary *commentsInfo;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSArray *commentsArray;
@property (retain, nonatomic) NSDictionary *postInfo;
@property (nonatomic) unsigned long long videoStyle;
@property (nonatomic) unsigned long long scenes;

@end
