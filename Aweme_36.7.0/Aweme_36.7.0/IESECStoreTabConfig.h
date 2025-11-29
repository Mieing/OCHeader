@class NSString, NSArray;

@interface IESECStoreTabConfig : MTLModel

@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSString *perfTrackEventName;
@property (retain, nonatomic) NSArray *scrollViewIds;
@property (nonatomic) BOOL needComponents;

- (void).cxx_destruct;

@end
