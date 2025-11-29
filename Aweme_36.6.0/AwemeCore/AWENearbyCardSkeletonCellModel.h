@class NSString, AWENearbyPageContext;

@interface AWENearbyCardSkeletonCellModel : NSObject <AWECommonFeedCellModelProtocol, AWENearbyCardFeedCellModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;

@end
