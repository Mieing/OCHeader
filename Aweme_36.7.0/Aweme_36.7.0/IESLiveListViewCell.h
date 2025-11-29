@class NSString;
@protocol IESLiveItemProtocol;

@interface IESLiveListViewCell : UITableViewCell <IESLiveReusable>

@property (retain, nonatomic) id<IESLiveItemProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCellForTableView:(id)a0;
+ (double)heightForItem:(id)a0;
+ (id)identifier;

@end
