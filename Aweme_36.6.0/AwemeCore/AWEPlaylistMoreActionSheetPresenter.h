@class NSString, DUXBasicSheet;

@interface AWEPlaylistMoreActionSheetPresenter : NSObject

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) NSString *playlistID;
@property (retain, nonatomic) NSString *ownerID;
@property (retain, nonatomic) NSString *playlistTitle;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ didTapReportBlock;
@property (copy, nonatomic) id /* block */ didLoginBlock;

- (void)showActionSheetOn:(id)a0 didTapReportBlock:(id /* block */)a1 didLoginBlock:(id /* block */)a2;
- (id)initWithPlaylistID:(id)a0 title:(id)a1 ownerID:(id)a2 referString:(id)a3;
- (void)didTapReport;
- (void).cxx_destruct;

@end
