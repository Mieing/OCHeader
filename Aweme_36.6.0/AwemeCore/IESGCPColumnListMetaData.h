@class IESGCPColumnListPageInfo, IESGCPColumnListExecInfo;

@interface IESGCPColumnListMetaData : NSObject

@property (retain, nonatomic) IESGCPColumnListPageInfo *pageInfo;
@property (retain, nonatomic) IESGCPColumnListExecInfo *execInfo;

- (void).cxx_destruct;

@end
