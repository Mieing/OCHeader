@class NSString, AWEVSFormatTabListModel, AWEVSFormatTabStreamingModel;

@interface AWEVSFormatTabCellModel : NSObject

@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) NSString *seasonID;
@property (retain, nonatomic) NSString *seasonTag;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEVSFormatTabListModel *videoModel;
@property (retain, nonatomic) AWEVSFormatTabStreamingModel *streamModel;

- (void).cxx_destruct;

@end
