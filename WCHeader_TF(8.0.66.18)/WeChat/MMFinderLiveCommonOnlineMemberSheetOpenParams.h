@class NSArray, NSString;

@interface MMFinderLiveCommonOnlineMemberSheetOpenParams : NSObject

@property (nonatomic) BOOL isPK;
@property (nonatomic) BOOL isDoubleSidePK;
@property (nonatomic) BOOL isRedSide;
@property (retain, nonatomic) NSArray *owners;
@property (retain, nonatomic) NSString *targetOwnerName;
@property (nonatomic) BOOL isSelfConnectMicUser;

- (void).cxx_destruct;

@end
