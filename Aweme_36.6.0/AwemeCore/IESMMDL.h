@class NSMutableDictionary;
@protocol IESMMDLInfoDelegate;

@interface IESMMDL : IESMMObject

@property (retain, nonatomic) NSMutableDictionary *arFrameInfos;
@property (weak, nonatomic) id<IESMMDLInfoDelegate> delegate;

+ (id)sharedInstance;

- (BOOL)isLocationAuthor;
- (id)getLCInfo;
- (void).cxx_destruct;

@end
