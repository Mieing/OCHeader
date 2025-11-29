@interface FlowIMX.MessageChainTracker : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ sendingMessage;
    void /* unknown type, empty encoding */ sendMessageAckDownlinkBody;
    void /* unknown type, empty encoding */ replyMessageList;
    void /* unknown type, empty encoding */ extToNotify;
    void /* unknown type, empty encoding */ receivingTimer;
    void /* unknown type, empty encoding */ startSendDate;
    void /* unknown type, empty encoding */ receiveACKDate;
    void /* unknown type, empty encoding */ receiveFirstPackageDate;
    void /* unknown type, empty encoding */ receiveFirstChunkDate;
    void /* unknown type, empty encoding */ receiveLastPackageDate;
    void /* unknown type, empty encoding */ receiveContentEndDate;
    void /* unknown type, empty encoding */ receiveFirstSuggestDate;
    void /* unknown type, empty encoding */ receiveSuggestEndDate;
    void /* unknown type, empty encoding */ receiveAllContentEndDate;
    void /* unknown type, empty encoding */ receiveContentFirstPackageDate;
    void /* unknown type, empty encoding */ receivedFirstChunk;
    void /* unknown type, empty encoding */ lastChunkSeqNo;
    void /* unknown type, empty encoding */ callSendDate;
    void /* unknown type, empty encoding */ sendHandlerFinishDate;
    void /* unknown type, empty encoding */ updateDatabaseDate;
    void /* unknown type, empty encoding */ enterTypewriterDate;
    void /* unknown type, empty encoding */ exitTypewriterDate;
    void /* unknown type, empty encoding */ replyPackageTimeoutInSec;
}

@end
